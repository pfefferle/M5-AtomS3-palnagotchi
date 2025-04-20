# Palnagotchi for M5 Atom S3(R) Dev Kit

![Palnagotchi](palnagotchi.jpg?raw=true)

A friendly unit for those lonely Pwnagotchis out there. It's written to run on the M5 Atom S3(R) Dev Kit.

This is a fork of [viniciusbo's Palnagotchi](https://github.com/viniciusbo/m5-palnagotchi) for the M5 Cardputer.

He reverse engineered the Pwngrid advertisement protocol and made it possible for the Cardputer to advertise to the Pwngrid as a Pwnagotchi. All brain policy parameters that could negatively impact AI learning were removed from the advertisemenet data.

The Pwngrid works by sending Wifi beacon frames with a JSON serialized payload in Wifi AC headers, containing the Pwnagotchi's data (name, face, pwns, brain policy between others). That's how nearby Pwnagotchis can detect and also learn each other. By crafting a custom beacon frame, this app can appear as a Pwnagotchi to other Pwnagotchis.

## Usage

- Run the app to start advertisement.
- Bottom bar shows total friends made in this run, all time total friends between parenthesis (needs EEPROM) and signal strengh indicator of closest friend.
- Nearby pwnagotchis shows all nearby units and its signal strength.
- Palnagotchi gets a random mood every minute or so.

## Why?

I don't like to see a sad Pwnagotchi.

## Planned features

- Friend spam?
