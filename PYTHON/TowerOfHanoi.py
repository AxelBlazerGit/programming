'''

Tower of Hanoi:
    pseudo:
        we have 3 rods and n disks of decreasing diameters initially a,b,c..
        goal is to move all disks from rod A to rod C employing rod B..
        {{{{
            
            M.E.T.A. is to move stack of (n-1) disks from rod A to rod B employing rod C first
        then placing the largest diameter disc from rod A to rod C..
        then move the stack of (n-1) disks from rod B to rod C employing rod A
        when n==0 all work is done
            
        }}}} now apply this recursively for N=n->n-1>n-2>..1->0
        rod A is treated as source of disks
        rod C is treated as destination of disks
        rod B is treated as transit for the disks being transported from source to destination

'''
def towerOfHanoiRecurse(n,A,B,C):
    if n==0:
        return
    towerOfHanoiRecurse(n-1,A,C,B)
    print(f"{A} -> {C}")
    towerOfHanoiRecurse(n-1,B,A,C)
    
    

print("towerOfHanoiRecurse for n=1")
towerOfHanoiRecurse(1,'1','2','3')
print("towerOfHanoiRecurse for n=2")
towerOfHanoiRecurse(2,'1','2','3')
print("towerOfHanoiRecurse for n=3")
towerOfHanoiRecurse(3,'1','2','3')
print("towerOfHanoiRecurse for n=4")
towerOfHanoiRecurse(4,'1','2','3')
print("towerOfHanoiRecurse for n=5")
towerOfHanoiRecurse(5,'1','2','3')
print("towerOfHanoiRecurse for n=6")
towerOfHanoiRecurse(6,'1','2','3')
# print("towerOfHanoiRecurse for n=6")
