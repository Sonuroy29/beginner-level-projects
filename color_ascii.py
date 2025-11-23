from PIL import Image

ASCII_CHARS = "@#%W$9876543210?!abc;:+=-,. "

def resize_image(image, new_width=150):
    width, height = image.size
    ratio = height / width / 1.65
    new_height = int(new_width * ratio)
    return image.resize((new_width, new_height))

def pixels_to_colored_ascii(image):
    pixels = image.load()
    width, height = image.size
    ascii_art = ""

    for y in range(height):
        for x in range(width):
            r, g, b = pixels[x, y]
            brightness = int((r + g + b) / 3)
            char = ASCII_CHARS[brightness * len(ASCII_CHARS) // 256]
            ascii_art += f"\033[38;2;{r};{g};{b}m{char}\033[0m"
        ascii_art += "\n"

    return ascii_art

def main(path, width=150):
    image = Image.open(path).convert("RGB")
    image = resize_image(image, width)
    ascii_image = pixels_to_colored_ascii(image)
    print(ascii_image)

if __name__ == "__main__":
    img_path = input("Enter image path: ")
    width = int(input("Width (default 150): ") or 150)
    main(img_path, width)
