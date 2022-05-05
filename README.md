print("Enter 'x' for exit.");
side = input("Enter side length of Square: ");
if side == 'x':
    exit();
else:
    side_length = int(side);
    area_square = side_length*side_length;
    print("\nArea of Square =",area_square);
