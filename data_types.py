# Creating an object to show all different data types

all_data_types = {
    "integer": 42,
    "float": 3.14, 
    "complex_num": 2 + 2j,
    "string": "Dishumm",
    "boolean": False, 
    "list": [90, 80, 70, 10], #mutable, ordered, duplicates_allowed 
    "tuple": ("Python", "SQL", "Automation"), #immutable, ordered, duplicates_allowed
    "set": {"AI", "ML", "DL"}, #unordered, mutable, unindexed, no_duplicates
    "dictionary": {
        "company": "KPMG",
        "role": "Data Analyst",
        "location": "Gurugram",
    }, #unordered, mutable, indexed, no_duplicates, key_value_pairs
    "range": range(1, 10), #immutable, ordered, duplicates_not_allowed
    "bytes": b"Hello", 
    "bytearray": bytearray([65, 66, 67]),
}

print(all_data_types)
print(all_data_types["string"])
