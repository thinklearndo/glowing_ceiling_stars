# glowing_ceiling_stars
Simple 3d printed stars that glow with a ws2812b inside them. Powered by an Arduino.

# Materials

* 6x 3d printed stars, base and cap. I printed mine out with Matte White Overture PLA at .3 layer height.
* 1x 25ft Monoprice Flat Adhesive Super Slim Micro Speaker Wire - Four 18AWG Conductors
* 6x ws2812b modules. I cut mine off a reel I got on ebay.
* Misc connector wires.
* Arduino.
* mounting putty, for holding the star shapes to the ceiling.
* A way to power it. I was planning on doing a rechargeable power bank, but never got around to it.

# Assembly

I planned on doing a hexagon layout, about 5' wide. I ended up needing 5 pieces of speaker wire, 3 2'10" long and 2'6" long, cut those out.

[pic of plan]

Strip 1 mm or so off the endes of each piece. I found this stuff really hard to work with, but a sharp kitchen knife worked well. I would score the white side of the tape. Then slide the tip of the knife under the white plastic and scrape it off.

[knife pics]

Solder the WS2812b modules to each strip of flat wire using your extra wires. Build it out like your shape. You only need 3 wires from the speaker wire, so make sure you keep them all lined up correctly. Also remember that the WS2812b's have a data in and a data out pin, so don't mix those up. For the first one, used jumper wires to connect to the WS2812b module, so it can be hooked up to the Arduino.

[solder pics]

Do a quick layout on the ground with your printed stars and the wiring. Then put a piece of mounting putty on the back of each star backing piece and get them mounted to the ceiling.

You will need help with this next part. Carefully take off the masking tape from the speaker wire and stick it up on the ceiling. Go around and make sure a WS2812b led is in each star backer spot.

Then put the caps on each star back by pressing them on, the tension should be enough to hold the caps up. Note: They are not symetrical, they only go on one way. Just keep rotating til it works :).

[pic of star on ceiling]

Upload the Arduino code and hook it up to the lights using the jumper wires. The default pins are pin 9 for the WS2812b data in pin and then 5v + for power and ground for ground.

I also used some mounting putty to mount the Arduino to the ceiling next to the first star.
