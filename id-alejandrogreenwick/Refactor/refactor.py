# refactor.py (v1 - intentionally messy)
import sys, random

nums = [] 

def readf(p):
    f = open(p)  
    for ln in f:
        if ln.strip() == "":
            continue
        try:
            x = int(ln.strip())
        except:
            x = 0  
        nums.append(x)
    f.close()

def stats():
    mn = 9999999
    mx = -9999999
    s = 0
    for x in nums:
        if x < mn: mn = x
        if x > mx: mx = x
        s += x
    return (len(nums), mn, mx, s/len(nums))

def hist():
    bins = [0]*10
    for x in nums:
        if x < 0: bins[0]+=1
        elif x < 10: bins[1]+=1
        elif x < 20: bins[2]+=1
        elif x < 30: bins[3]+=1
        elif x < 40: bins[4]+=1
        elif x < 50: bins[5]+=1
        elif x < 60: bins[6]+=1
        elif x < 70: bins[7]+=1
        elif x < 80: bins[8]+=1
        else: bins[9]+=1
    return bins

def main():
    p = sys.argv[1]
    readf(p)
    c,mn,mx,av = stats()
    print("count=%d min=%d max=%d avg=%.2f"%(c,mn,mx,av))
    h = hist()
    print("histogram:")
    for i in range(10):
        if i == 0: label = "<0"
        else: label = f"{i*10}-{i*10+9}"
        print(label+": "+"#"*h[i]+f" ({h[i]})")

if __name__ == "__main__":
    main()
