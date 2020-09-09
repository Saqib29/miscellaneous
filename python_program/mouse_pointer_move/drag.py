import mouse
x = 0


mouse.on_click(lambda: print("left click"))
mouse.on_right_click(lambda: print("right clcik"))
mouse.unhook_all()
