from threading import Thread
from datetime import datetime
from time import sleep
import requests
import json

def cfupdate(day):
    for _ in range(5):
        days = day*(-86400)
        res = requests.get("https://codeforces.com/api/contest.list?gym=false")
        results = json.loads(res.text)
        # print(results) # this is a dictionary
        ret = []
        for contest in results['result']: # each element is also a dictionary
            crts = contest['relativeTimeSeconds']
            if crts >= days and crts < 0:
                name = contest['name']
                if not name.isascii(): # if non-english name found
                    continue
                starttime = datetime.fromtimestamp(contest['startTimeSeconds']+21600).strftime("Start: %a, %d %b %Y %r")
                lefttime = ''
                if crts >= -86400:
                    lefttime = datetime.fromtimestamp(crts*(-1)).strftime("Time left: %H:%M:%S")
                else:
                    lefttime = datetime.fromtimestamp(crts*(-1)-86400).strftime("Time left: %d days, %H:%M:%S")
                ret.append(name+'\n'+starttime+'\n'+lefttime)
        print(ret)
        sleep(5)


t1 = Thread(target=cfupdate, args=(5,))
t1.start()
cfupdate(1)

