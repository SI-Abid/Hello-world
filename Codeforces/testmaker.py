# there will be 5 row and 5 column
# 2 nested loop, first for the rows, 2nd fors the cols
# initialize a list of list
# for each row, append a list of 5 zeros
# then loop through the list of list
# print the list of list
# print the list of list
# print the list of list

matrix = []
for i in range(5):
    matrix.append([])
    for j in range(5):
        matrix[i].append(0)
