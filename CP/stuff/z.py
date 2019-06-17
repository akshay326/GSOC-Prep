import requests, time
import matplotlib.pyplot as plt
  
n = 100
URL = "https://codeforces.com/api/user.status?handle=AKS1996&&count="+str(n)
    
# sending get request and saving the response as response object 
r = requests.get(url = URL)#, params = PARAMS) 
  
# extracting data in json format 
data = r.json() 
data = data["result"]

l = [] # times
for i in range(n):
	if data[i]["verdict"] == "OK":
		l.append(data[i]["creationTimeSeconds"])

M = {}
for i in l:
	d = time.strftime('%d-%m', time.localtime(i))
	if d in M:
		M[d] += 1
	else:
		M[d]=1

plt.plot(range(len(M)), M.values())
plt.xticks(range(len(M)), list(M.keys()))
plt.show()

# key = 2275604653ed12f1362ea0142c7dd47226fc1721
# sec = 2b1c609c0a0d48968f73d2e8201349fd723294bd
