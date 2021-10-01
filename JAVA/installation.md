# Installing the Default JRE/JDK

The easiest option for installing Java is to use the version packaged with Ubuntu. By default, Ubuntu 18.04 includes OpenJDK version 11, which is an open-source variant of the JRE and JDK.

To install this version, first update the package index:

`sudo apt update`

Next, check if Java is already installed:

`java -version`

If Java is not currently installed, you’ll see the following output:

```
Output
Command &#39;java&#39; not found, but can be installed with:
apt install default-jre
apt install openjdk-11-jre-headless
apt install openjdk-8-jre-headless

```

Execute the following command to install the default Java Runtime Environment (JRE), which will install the JRE from OpenJDK 11:

`sudo apt install default-jre`

The JRE will allow you to run almost all Java software. Verify the installation with:

`java -version`

You’ll see the following output:

```
Output
openjdk version &quot;11.0.7&quot; 2020-04-14
OpenJDK Runtime Environment (build 11.0.7+10-post-Ubuntu-2ubuntu218.04)
OpenJDK 64-Bit Server VM (build 11.0.7+10-post-Ubuntu-2ubuntu218.04, mixed mode,
sharing)

```

You may need the Java Development Kit (JDK) in addition to the JRE in order to compile and run some specific Java-based software. To install the JDK, execute the following command, which will also install the JRE:

`sudo apt install default-jdk`

Verify that the JDK is installed by checking the version of javac, the Java compiler:

`javac -version`

You’ll see the following output:

```
Output
javac11.0.7

```