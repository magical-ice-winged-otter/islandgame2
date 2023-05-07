import sys

class color:
   PURPLE = '\033[95m'
   CYAN = '\033[96m'
   DARKCYAN = '\033[36m'
   BLUE = '\033[94m'
   GREEN = '\033[92m'
   YELLOW = '\033[93m'
   RED = '\033[91m'
   BOLD = '\033[1m'
   UNDERLINE = '\033[4m'
   END = '\033[0m'

dpptFile=sys.argv[1]
expansionFile=sys.argv[2]

print("dpptFile: {}".format(dpptFile))
print("expansionFile: {}".format(expansionFile))
print("----------------------------------------------------------------------")

dpptDefines = {}
expansionDefines = {}

with open(dpptFile) as file:
    for line in file:
        elements = line.split()
        if len(elements) >= 3 and elements[0] == '#define':
            dpptDefines[elements[1]] = elements[2]
            #print(elements[1])

with open(expansionFile) as file:
    for line in file:
        elements = line.split()
        if len(elements) >= 3 and elements[0] == '#define':
            expansionDefines[elements[1]] = elements[2]
            # if elements[1].startswith("MUS_"):
            #     print("X({}) \\".format(elements[1]))

dpptSet = set(dpptDefines.keys())
expansionSet = set(expansionDefines.keys())
intersect = dpptSet.intersection(expansionSet)
dpptOnly = dpptSet.difference(expansionSet)
expansionOnly = expansionSet.difference(dpptSet)

# print("DPPT Only Keys:")
# for key in dpptOnly:
#     print(key + "=" + dpptDefines[key])

# print("----------------------------------------------------------------------")

# print("Expansion Only Keys:")
# for key in expansionOnly:
#     print(key + "=" + expansionDefines[key])

# print("----------------------------------------------------------------------")

# print("Conflicting Keys:")
# for key in intersect:
#     if dpptDefines[key] != expansionDefines[key]:
#         print(key + "=" + dpptDefines[key] + "," + expansionDefines[key])

# print("----------------------------------------------------------------------")

# print("Harmonious Keys:")
# for key in intersect:
#     if dpptDefines[key] == expansionDefines[key]:
#         print(key + "=" + dpptDefines[key] + "," + expansionDefines[key])
