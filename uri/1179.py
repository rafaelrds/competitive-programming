v_par = []
v_impar = []

def print_list(l, name):
    for i, el in enumerate(l):
        print "%s[%d] = %d" % (name, i, el)


for i in xrange(15):
    n = int(raw_input())
    if (n % 2 != 0):
        v_impar.append(n)
    else:
        v_par.append(n)

    if (len(v_impar) == 5):
        print_list(v_impar, 'impar')
        v_impar = []
    elif (len(v_par) == 5):
        print_list(v_par, 'par')
        v_par = []

print_list(v_impar, 'impar')
print_list(v_par, 'par')
