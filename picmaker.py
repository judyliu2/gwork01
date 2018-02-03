

def make_ppm():
    width = 400;
    height = 200;
    max_val = 255;
    
    r = 150;
    b = 255;
    g = 255;

  #  image = array.array('B', [r,g,b] *width * height)

    pic = open("pic.ppm", 'wb')
    pic.write("%s\n"% ("P3"))
    pic.write("%d %d\n"%(width,height))
    pic.write("%d\n"% (max_val))
    
    y = 0
    while(y < height):
        x = 0
        b-=1
        while (x < width):
            pic.write("%d %d %d " %(r,g,b));
            x+=1;

        y+=1;



make_ppm();
