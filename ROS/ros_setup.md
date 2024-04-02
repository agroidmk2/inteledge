# ROS install

Check Ubuntu version

```
$ lsb_release -a
```

```
$ sudo apt-get update
$ sudo apt-get upgrade
```


## Remove ROS Noetic

```shell
$ sudo apt-get remove ros-*
$ sudo apt-get purge ros-*

$ sudo apt autoremove

# Check remove completed
$ rosversion -d 
```


## Install ROS Noetic

```shell
$ sudo apt update
$ sudo apt upgrade
$ wget https://raw.githubusercontent.com/ROBOTIS-GIT/robotis_tools/master/install_ros_noetic.sh
$ chmod 755 ./install_ros_noetic.sh 
$ bash ./install_ros_noetic.sh
```


```shell
$ sudo apt-get install ros-noetic-joy ros-noetic-teleop-twist-joy \
  ros-noetic-teleop-twist-keyboard ros-noetic-laser-proc \
  ros-noetic-rgbd-launch ros-noetic-rosserial-arduino \
  ros-noetic-rosserial-python ros-noetic-rosserial-client \
  ros-noetic-rosserial-msgs ros-noetic-amcl ros-noetic-map-server \
  ros-noetic-move-base ros-noetic-urdf ros-noetic-xacro \
  ros-noetic-compressed-image-transport ros-noetic-rqt* ros-noetic-rviz \
  ros-noetic-gmapping ros-noetic-navigation ros-noetic-interactive-markers
```



```shell
$ cd ~/catkin_ws/src/
$ git clone -b noetic-devel https://github.com/ROBOTIS-GIT/DynamixelSDK.git
$ git clone -b noetic-devel https://github.com/ROBOTIS-GIT/turtlebot3_msgs.git
$ git clone -b noetic-devel https://github.com/ROBOTIS-GIT/turtlebot3.git
$ cd ~/catkin_ws && catkin_make
```


## Environment variables setup

```shell
$ ifconfig
$ nano ~/.bashrc
```

add 4 lines in `.bashrc`

```bash
source /opt/ros/noetic/setup.bash
source ~/catkin_ws/devel/setup.bash

export ROS_MASTER_URI=http://[IP Address]:[PORT]
export ROS_HOSTNAME=[IP ADDRESS]
```

```shell
$ source ~/.bashrc
```

## Test

```shell
$ roscore
```
