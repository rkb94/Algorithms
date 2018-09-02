answer=[]
for i in range(3):
    input_num = input()
    mylist = [0]*input_num
    for j in range(len(mylist)):
        mylist[j] = input()
    answer.append('0' if sum(mylist) == 0 else '-' if sum(mylist)<0 else '+')
print ('\n'.join(answer))

# test
# answer=[]
# for i in range(3):
#     s = sum([int(raw_input()) for j in range(int(raw_input()))])
#     answer.append('0' if s==0 else '-' if s<0 else '+')
# print ('\n'.join(answer))