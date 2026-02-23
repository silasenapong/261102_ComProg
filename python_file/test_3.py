import pygame
import sys

# 1. Initialize Pygame
pygame.init()

# 2. Define your parameters
x = 150   # Coordination X
y = 100   # Coordination Y
w = 200   # Width to the right
h = 150   # Height to the bottom

# 3. Setup the desktop window
screen_width, screen_height = 800, 600
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Square Plotter")

# 4. Main Loop
while True:
    # Check for events (like clicking the 'X' to close)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # 5. Drawing
    screen.fill((30, 30, 30))  # Fill background with dark grey

    # Draw the rectangle: (surface, color, (x, y, width, height))
    # Note: h expands downward and w expands rightward automatically
    pygame.draw.rect(screen, (0, 255, 127), (x, y, w, h))

    # Update the display
    pygame.display.flip()