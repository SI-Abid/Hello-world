import json
from utils2 import Database
from replit import db


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
    # read_self(__file__)
    # delete a key
    # del db.store
    # print(db.keys())
    # print(type(db))
    # for key, value in db.items():
    #     print(key, value)
    # db['logins'] = {
    #     'username': 'admin',
    #     'password': 'admin'
    # }
    # db['greets'] = ['hello', 'hi', 'hey']
    # print(json.dumps(db, indent=4))
    # db = Database()
    db['users'] = 'admin'
    # db.update(db)
    print(json.dumps(db, indent=4))
    

if __name__=="__main__":
    main()
