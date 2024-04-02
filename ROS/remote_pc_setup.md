## Linux on Remote PC

### Install xfce4

```
sudo apt-get install xfce4
```

### Install xrdp

```
systemctl status xrdp
sudo apt-get install xrdp
```

### Setup xrdp

```
sudo gedit /etc/xrdp/startwm.sh
```

Apeend two lines

```
xfce4-session
. /usr/bin/startxfce4
```

```
sudo systemctl enable --now xrdp

sudo ufw allow from any to any port 3389 proto tcp

sudo /etc/init.d/xrdp restart
ifconfig

# if error occured 'sudo apt install net-tools'
```

### Check port

```
netstat -antp
```

### UFW Usage

```
sudo apt install ufw
sudo ufw allow from any to any port 3389
sudo ufw enable
# sudo ufw disable
sudo ufw status verbose
```

### network config

```shell
$ ifconfig
$ gedit ~/.bashrc
```

In `.bashrc`  change `ROS_MASTER_URI`, `ROS_HOSTNAME`

```bash
export ROS_MASTER_URI=http://[IP ADDRESS]:[PORT]
export ROS_HOSTNAME=[IP ADDRESS]
```

```shell
$ source ~/.bashrc
```

### Set TurtleBot3 Model Name

```shell
$ echo "export TURTLEBOT3_MODEL=burger" >> ~/.bashrc
$ source ~/.bashrc
```
