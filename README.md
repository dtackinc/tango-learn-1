# tango-learn-1

# run Learn named pingpong, full device name is: tango://localhost:20001/TangoLearn1Class/devel/ping#db=no
~/DeviceServers/TangoLearn1Class dontcare -v5 -ORBendPoint giop:tcp::20001 -nodb -dlist TangoLearn1Class/devel/ping

# run with database on a file
~/DeviceServers/TangoLearn1Class dontcare -v4 -ORBendPoint giop:tcp::20001 -nodb -dlist TangoLearn1Class/devel/ping

