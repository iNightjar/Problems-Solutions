n = int(input())
results = []
for i in range(n):
    results.append(list(map(int, input().split())))

for r in results:
    if r[0] != r[1]:
        print("rated")
        exit()

for i in range(n):
    for j in range(i):
        if results[i][0] > results[j][0]:
            print("unrated")
            exit()

print("maybe")
