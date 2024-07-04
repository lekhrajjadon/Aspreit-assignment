# Use an official GCC image as a parent image
FROM gcc:latest

# Set the working directory
WORKDIR /usr/src/app

# Copy the current directory contents into the container at /usr/src/app
COPY . .

# Compile the C++ program
RUN g++ -o myapp main.cpp

# Make port 8080 available to the world outside this container
EXPOSE 8080

# Run the executable when the container launches
CMD ["./myapp"]

