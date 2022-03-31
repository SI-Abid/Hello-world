# open a file in read mode
# read the file line by line
import sys 
import clipboard as cb
ext = {
    'cpp': 'c++',
    'c': 'c',
    'py': 'python',
    'java': 'java'
}

def formater(file_name):
    try:
        code=';compile '
        code+=ext[file_name.split('.')[1]]
        code+='\n```\n'
        with open(file_name, 'r') as f:
            for line in f:
                code += line
        code+='\n```\n'
        return code
    except FileNotFoundError as e:
        print(e)
        

code = formater(sys.argv[1])
# copy the code to clipboard

cb.copy(code)

if cb.paste() == code:
    print('Success')