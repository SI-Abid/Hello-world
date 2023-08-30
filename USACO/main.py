import os

name = input()
os.system(f"touch {name}.py")
template = f"with open('{name}.in') as f:\n\t# code here\n\twith open('{name}.out', 'w') as f2:\n\t\t# code here\n\t\tpass"
os.system(f'echo "{template}" > {name}.py')
with open(f"{name}.in", "w") as f:
    try:
        while True:
            f.write(input())
            f.write("\n")
    except EOFError:
        pass