import json

class Database(dict):
    """
    A dictionary-like object that can be used to store key-value pairs in a file.
    """
    file_path = "database.json"

    def __init__(self, file_path=None):
        self.file_path = file_path or self.file_path
        self.load()

    def __setitem__(self, key, value):
        super().__setitem__(key, value)
        self.save()

    def __delitem__(self, key):
        super().__delitem__(key)
        self.save()
        
    def update(self, other):
        super().update(other)
        self.save()

    def load(self):
        try:
            with open(self.file_path, "r") as f:
                self.clear()
                self.update(json.load(f))
        except FileNotFoundError:
            pass

    def save(self):
        with open(self.file_path, "w") as f:
            json.dump(self, f, indent=4)
        