from time import time
from selenium import webdriver
from bs4 import BeautifulSoup
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.webdriver.chrome.service import Service
from webdriver_manager.chrome import ChromeDriverManager
import json

def get_result(ID: str, url: str, driver: webdriver.Chrome) -> dict:
    driver.get(url)
    driver.find_element(By.ID, 'student_id').send_keys(ID)
    driver.find_element(By.NAME, 'action').click()
    data = dict()
    try:
        resultDiv = EC.presence_of_element_located((By.CLASS_NAME, "ng-binding"))
        WebDriverWait(driver, 10).until(resultDiv)
        soup = BeautifulSoup(driver.page_source, "html.parser")
        results = soup.find_all("div", class_="ng-binding")

        for idx in range(len(results)):
            dat = results[idx].text.strip()
            key, val = dat.split(":")
            key = key.strip().lower().replace(" ", "_")
            val = val.strip()
            data[key] = val
            
    except Exception as e:
        print(e)
    return data


ID = '2012020303'

url = "https://www.lus.ac.bd/result/"

option = webdriver.ChromeOptions()
option.add_argument("headless")
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=option)

# data = list()
# main_clock = time()
for ids in range(2012020301, 2012020335):
    clock_start = time()
    res = get_result(str(ids), url, driver)
    clock_ends = time()
    if res: 
        print(res)
        # data.append(res)
        # print(f"{ids} : {round(clock_ends - clock_start, 3)}")
    # print time taken to get result for each ID to 3 decimal places
    # print(f"Time taken for {ids} : {clock_ends - clock_start}(s)")
    # sleep(1)

# print(get_result(ID, url, driver))

driver.quit()

# with open("result.json", "w") as f:
#     json.dump(data, f)
# end_clock = time()
# print(f"Total time taken : {round((end_clock - main_clock)/60, 3)}(m)")

