def read_self(file_path : str):
    with open(file_path, "r") as f:
        for line in f.readlines():
            print(line)

def count_lines(file_path : str) -> int:
    with open(file_path, "r") as f:
        return len(f.readlines())

def main():
    # print(count_lines(__file__.replace("main","fun")))
    # print(count_lines(__file__.replace("main","draw")))
    read_self(__file__)

if __name__=="__main__":
    main()
