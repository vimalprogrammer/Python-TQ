data = "3$5&^*7264%%#^"
print(data) 
lenofsymb=0
lod=[]
lev=[]
for ch in data:
    if(ch.isalnum()==False):
        lenofsymb+=1
    if(ch.isdigit()):
        if(int(ch)%2!=0):
            lod.append(ch);
        else:
            lev.append(ch);
oddl=len(lod)
evel=len(lev)
maxi=max(oddl,evel)
o=0;e=0;
if(lenofsymb%2==0):
    lod,lev=lev,lod
    
for i in range(maxi):
    if(o!=oddl):
        print(lod[o],end='');
        o+=1;
    if(e!=evel):
        print(lev[e],end='');
        e+=1