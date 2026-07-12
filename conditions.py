cgpa = 9
branch = "Information Security"
placed = True

eligible_branches = ["Computer Science Engineering", "Information Security", "Artificial Intelligence"]

if (
    cgpa >= 8.5
    and branch in eligible_branches
    and not placed
):
    print("You are eligible for placements")
else:
    print("You are already placed, so you are not eligible for placement assistance")
