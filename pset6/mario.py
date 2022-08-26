while True:
    try:
        height = int(input("Height: "))
        if (height > 0 and height < 9):
            break
    except ValueError:
        None

esp = height
hast = 0
for j in range(height):
    esp -= 1
    hast += 1
    print((esp * " ") + (hast * "#") + ("  ") + (hast * "#"))