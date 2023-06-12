from roboid import *

beagle = Beagle()


move_point = 2

print("beagle go 1")
move_point += 1

beagle.wheels(30, 30)
wait(1500)
if (move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16) :
  #beagle.stop()
  beagle.wheels(30,-30)
  wait(775)
  if move_point > 16 :
      move_point -= 16


print("beagle go 2")
for i in range(2) :
    move_point += 1
    beagle.wheels(30, 30)
    wait(1500)
    if move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16 :
      #beagle.stop()
      beagle.wheels(30,-30)
      wait(775)
    if move_point > 16 :
      move_point -= 16


print("beagle go 3")
for i in range(3) :
    beagle.wheels(30, 30)
    wait(1500)
    move_point += 1
    if move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16 :
      #beagle.stop()
      beagle.wheels(30,-30)
      wait(775)
    if move_point > 16 :
      move_point -= 16


print("beagle go 4")
for i in range(4) :
    move_point += 1
    beagle.wheels(30, 30)
    wait(1500)
    if move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16 :
      #beagle.stop()
      beagle.wheels(30,-30)
      wait(775)
    if move_point > 16 :
      move_point -= 16


print("beagle go 5")
for i in range(5) :
    beagle.wheels(30, 30)
    wait(1500)
    move_point += 1
    if move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16 :
      #eagle.stop()
      beagle.wheels(30,-30)
      wait(775)
      if move_point > 16 :
        move_point -= 16

print("beagle go 6")
for i in range(6) :
    beagle.wheels(30, 30)
    wait(1500)
    move_point += 1
    if move_point == 3 or move_point == 8 or move_point == 11 or move_point == 16 :
      #beagle.stop()
      beagle.wheels(30,-30)
      wait(775)
    if move_point > 16 :
      move_point -= 16

'''

from roboid import *

beagle = Beagle()

beagle.wheels(30, 30)
    wait(1500)
beagle.wheels(30,-30)

dispose()
'''
