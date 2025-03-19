file = "abcdefgh"
for rank in range(1,9):
  for f in file:
    print(f + str(rank), end=", ")
  print()