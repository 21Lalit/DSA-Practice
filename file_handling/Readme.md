### Basic File Handling Process
```Open the file --> Perform an Operation --> Close the file```

### Read Mode
```
file = open("notes.txt", "r")
print(file.read())
file.close()
```
### Write Mode
- Creates the file if it doesn't exist.
- Deletes previous content if the file already exists.
```
file = open("notes.txt", "w")
file.write("First line")
file.close()
```
- With statement handles closing automatically
```
with open("notes.txt", "w") as file:
    file.write("New Data")
```
### Append Mode
```
file = open("notes.txt", a) as file
file.append("HEllo Buddy this is a new line")
file.close()
```
or
```
with open("notes.txt", "a") as file:
    file.write("\n This is another line.")
```
### Exclusive Creation Mode
Use this mode when you don't want to accidentally overwrite an existing file.
```
with open("reports.txt", "x") as file:
    file.write("Montly report")
```
If reports.txt already exists, python raises:
```FileExistsError```
### Read and Write
The file must already exist to perform this..
```
with open("notes.txt", "r+") as file:
    content = file.read()
    print(content)

    file.write("\n New information")
```
### Write and Read
```
with open("notes.txt", "w+") as file
    file.write("Hello Python")

    file.seek(0)
    print(file.read())
```
>_ seek(0) moves the file pointer back to the beginning.

### Append and Read
```
with open("notes.txt", "a+") as file:
    file.write("\n New record")

    file.seek(0)
    print(file.read())
```


