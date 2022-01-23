"""Example: 1) 3,2,6,5,1,4,8,9
Num1 : 3+2+6+9 =20
Num2: 5148
output: 5248+20 = 5168"""

nums=list(map(int,input().split(',')))

num1=sum(nums[:nums.index(5)])+sum(nums[nums.index(8)+1:])

l=nums[nums.index(5):nums.index(8)+1]

str1=""
for i in l:
    str1+=str(i);

print(num1);
print(str1);
print(num1+int(str1))