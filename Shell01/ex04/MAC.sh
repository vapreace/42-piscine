ifconfig | grep ether | awk '{print $2}' | uniq
