import sys

n = int(input())
nums = [int(x) for x in input().split()]

fig = []
lst = 1
ans = 0

for i in range(0, len(nums)):
    if(lst !=  1 and nums[i] != 1):
        print("Infinite")
        sys.exit()

    if(nums[i] != 1):
        fig.append(nums[i])
        ans += nums[i]+1

        if(i != 0 and i != n-1):
            ans += nums[i]+1;

    lst = nums[i]

for i in range(0, len(fig)-1):
    if(fig[i] == 3 and fig[i+1] == 2):
        ans -= 1

print("Finite\n",ans,sep='')
                                        
