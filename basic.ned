
//
// Copyright (C) 2019 Jon Alesander N��ez
//
// This file is distributed WITHOUT ANY WARRANTY. See the file
// `license' for details on this and other legal matters.
//


// Se definen los diferentes m�dulos de la red

simple sender
{
    @display("i=block/tx");
    gates:
        input inS;
        input in;
        output out;
}

simple receiver
{
    @display("i=block/rx");
    gates:
        input in;
        output out;
}

simple source
{
    @display("i=block/source");
    gates:
        output out;
}


// Se realizan las conexiones entre los m�dulos

network basic
{
    types:
        channel Ethernet100 extends ned.DatarateChannel
        {
            //datarate = 100Mbps;
            datarate = 9600bps;
            per = 0.5;
        }
    submodules:
        source: source {
            @display("p=45,152");
        }
        sender: sender {
            @display("p=136,152");
        }
        receiver: receiver {
            @display("p=279,152");
        }
    connections:
        source.out --> sender.inS;
        sender.out --> Ethernet100 --> receiver.in;
        receiver.out --> Ethernet100 --> sender.in;
}

