import Sage

Sage.mod1.add(1, 2)  # will call add from mod1

# Will cause errors, because __init__ hasn't initialise mod2
# Sage.mod2.add(1, 2)  # will call add from mod2
