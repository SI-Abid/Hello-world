import json
a = ''
b = ''
while True:
    try:
        x = input()
        if (x == '--'):
            break
        a += x
    except:
        break
while True:
    try:
        x = input()
        b += x
    except:
        break

json1 = json.loads(a)
json2 = json.loads(b)

vals = json2['vals']
rules = json1['rules']
ans = []
flag = True

def solve(prop, cond):
    # print(prop, cond)
    if prop == 'any':
        if type(cond) == list:
            for i in cond:
                if type(i) == str:
                    return i in vals
                else:
                    key = i.keys().__iter__().__next__()
                    flag |= solve(key, i[key])
        elif type(cond) == str:
            return cond in vals
        else:
            key = cond.keys().__iter__().__next__()
            flag |= solve(key, cond[key])

    if prop == 'all':
        if type(cond) == list:
            for i in cond:
                if type(i) == str:
                    if i not in vals:
                        return False
                else:
                    key = i.keys().__iter__().__next__()
                    if not solve(key, i[key]):
                        return False
                    
            return True
        elif type(cond) == str:
            if cond not in vals:
                return False
        else:
            key = cond.keys().__iter__().__next__()
            flag &= solve(key, cond[key])

    return cond in vals

# print(json.dumps(rules))

for rule in rules:
    cond = rule['cond']
    key = cond.keys().__iter__().__next__()
    solve(key, cond[key])
    if flag:
        ans.append(rule['payload'])

print(','.join(ans))

# print(rules)
