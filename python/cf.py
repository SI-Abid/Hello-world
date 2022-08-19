from hashlib import sha512
from random import Random
import time
import requests
import json

def generateEndpoint(prefix: str, api_key: str, api_secret: str, params: list) -> str:
    """
    Generates an API endpoint for the given parameters.
    """
    rand = (Random().random()*1000000).__round__().__str__()
    params.insert(0, ('apiKey', api_key))
    params.append(('time', str(int(time.time()))))
    
    param_str = f"{prefix}?{'&'.join(['='.join(p) for p in params])}"
    
    signature = sha512((rand + param_str + '#' + api_secret).encode('utf-8')).hexdigest()
    
    param_str += f"&apiSig={rand}{signature}"
    
    # print(param_str)
    return param_str
    

contestId = input("Contest ID: ")

key = "dea4d1ff9e09ca7616967105cf696966439c4d71"
secret = "5be1c94fe438da7e284cace2c0759a46fe34e995"
time_milis = time.time().__round__().__str__()
# generateEndpoint("/user.friends", key, secret, {"onlyOnline": True, "time": time_milis})
# apiSignature = sha512(f"{rand}/user.friends?apiKey={key}&onlyOnline=true&time={time_milis}#{secret}".encode('utf-8')).hexdigest()

# endpoint = "https://codeforces.com/api/user.friends?onlyOnline"
# endpoint = "https://codeforces.com/api/contest.ratingChanges?"
# endpoint = f"https://codeforces.com/api/user.friends?apiKey={key}&onlyOnline=true&time={time_milis}&apiSig={rand}{apiSignature}"
endpoint = "https://codeforces.com/api" 
params = [("onlyOnline", "false")]
res = requests.get(endpoint+generateEndpoint("/user.friends", key, secret, params))
friend_list = json.loads(res.text)["result"]

params = [("contestId", contestId), ("handles", ';'.join(friend_list)), ("showUnofficial", "false")]
res = requests.get(endpoint+generateEndpoint("/contest.standings", key, secret, params))
standings = json.loads(res.text)["result"]["rows"]
# dump(standings) in json format
with open("standings.json", "w") as f:
    json.dump(standings, f, indent=4)

# header['contestId'] = contestId
# header['from'] = 1
# header['count'] = 10
# header['showUnofficial'] = True