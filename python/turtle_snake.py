import turtle
import time
import random

# Set up the screen
screen = turtle.Screen()
screen.bgcolor("black")
screen.title("Snake")

# Create the snake
snake = turtle.Turtle()
snake.color("white")
snake.shape("square")
snake.penup()
snake.speed(0)

delay = 0.01

# Set the initial position of the snake
snake.setpos(0,0)

# Set the initial direction of the snake
snake.setheading(90)

# Set the snake's speed
snake_speed = 15

# Create the food for the snake
food = turtle.Turtle()
food.color("red")
food.shape("circle")
food.penup()
food.speed(0)
food.setpos(0,100)

# Set the score to 0
score = 0

# Set the movement speed
speed = 15

# Set the direction
direction = "stop"

# Define the snake's movement
def move():
    if direction == "up":
        y = snake.ycor()
        snake.sety(y + speed)
    if direction == "down":
        y = snake.ycor()
        snake.sety(y - speed)
    if direction == "left":
        x = snake.xcor()
        snake.setx(x - speed)
    if direction == "right":
        x = snake.xcor()
        snake.setx(x + speed)

# Define the function that will be called when a key is pressed
def go_up():
    global direction
    direction = "up"

def go_down():
    global direction
    direction = "down"

def go_left():
    global direction
    direction = "left"

def go_right():
    global direction
    direction = "right"

# Set the key bindings
screen.listen()
screen.onkeypress(go_up, "Up")
screen.onkeypress(go_down, "Down")
screen.onkeypress(go_left, "Left")
screen.onkeypress(go_right, "Right")

segments = []

# Create the scoreboard
scoreboard = turtle.Turtle()
scoreboard.hideturtle()
scoreboard.color("white")
scoreboard.penup()
scoreboard.goto(-290, 310)
scoreboard.write("Score: 0", align="left", font=("Arial", 14, "normal"))

# Update the score on the scoreboard
def update_scoreboard(score):
    scoreboard.clear()
    scoreboard.write("Score: {}".format(score), align="left", font=("Arial", 14, "normal"))



# Main game loop
while True:
    # Move the snake
    move()

    # Check for collision with the walls
    if snake.xcor() > 290 or snake.xcor() < -290 or snake.ycor() > 290 or snake.ycor() < -290:
        print("Game Over!")
        break

    # Check for collision with the snake itself
    for segment in segments:
        if segment.distance(snake) < 20:
            print("Game Over!")
            break

    # Check if the snake has eaten the food
    if snake.distance(food) < 20:
        # Increase the score
        score += 10
        
        # Call the update_scoreboard function whenever the score changes
        update_scoreboard(score)
        scoreboard.goto(-290, 310)

        # Add a new segment to the snake
        new_segment = turtle.Turtle()
        new_segment.color("grey")
        new_segment.shape("square")
        new_segment.penup()
        segments.append(new_segment)

        # Move the food to a new random position
        x = random.randint(-290, 290)
        y = random.randint(-290, 290)
        food.goto(x,y)

    # Move the segments of the snake in reverse order
    for index in range(len(segments)-1, 0, -1):
        x = segments[index-1].xcor()
        y = segments[index-1].ycor()
        segments[index].goto(x, y)

    # Move segment 0 to where the snake's head is
    if len(segments) > 0:
        x = snake.xcor()
        y = snake.ycor()
        segments[0].goto(x,y)

    # Update the screen
    screen.update()

    # Wait a short period of time
    time.sleep(delay)
