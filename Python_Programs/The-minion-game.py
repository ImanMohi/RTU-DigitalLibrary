# This is a minion game in python 3

def minion_game(string):
  vowel =['A','E','I','O','U']
  S=0
  K=0
  for i in range(len(string)):
      if string[i] in vowel:
          K+= len(string)-i
      else:
          S+=len(string)-i
  if S>K:
      print("Stuart"+" "+ "%d" % S)
  elif K>S:
      print("Kevin"+" "+'%d' % K)
  else:
      print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)
