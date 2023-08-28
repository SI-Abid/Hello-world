for _ in range(int(input())):
    input()
    st = input()
    characters = 'abcdefghijklmnopqrstuvwxyz'
    flag = False
    # it can be proved the answer exist in length 3
    for length in range(1, 4):
        for combo in range(len(characters) ** length):
            sequence = ""
            for _ in range(length):
                sequence = characters[combo % len(characters)] + sequence
                combo //= len(characters)
            if sequence not in st:
                print(sequence)
                flag = True
                break
        if flag:
            break
