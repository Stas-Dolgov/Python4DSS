def print_rectangle(w: int, h: int, s: str = '*', is_fill: bool = True):
    for r in range(h):
        if r == 0 or r == h - 1 or is_fill:
            print(s * w)
        else:
            print(s + ' ' * (w - 2) + s)
print('ok/')
if __name__ == '__main__':
    print('vjlekm ukfdysq')