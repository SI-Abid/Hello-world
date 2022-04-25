import os

path=os.path.dirname(os.path.realpath(__file__))
cmd1=f'gcc {path}/temp.c -o {path}/temp'
os.system(cmd1)
# os.execl(path+'/temp', 'temp')
os.system(f'cat {path}/input.txt | {path}/temp > {path}/output.txt')
os.system('rm '+path+'/temp')
text = open(path+'/output.txt', 'r').read()
print(text)
# print(os.path.abspath("."))
# print(path)