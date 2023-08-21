# A QWERTY portuguese layout for the lily58
## The theory
This is a layout meant for writing and coding in portuguese.
The layout consists of 4 layers:
 * QWERTY - The default layer with the portuguese querty layout, including accents ("´", "`") and "ç", along with the dor, coma, minus and a number row;
 * SYMBOL - All the symbols you need for writing or coding; The number row is replaced with the F keys (1 to 12), the row above the hme row gets the symbols in the same columns as the number row would have. The other symbols are honestly allover the place (I'm also getting used to it). It replaces the left shift by an Alt to allow for key combinations (think ALt+F4 for example);
 * MOVE - The layer with the arrows (on the vim positions). On the right side it has the arrows cluster keys like page up and down, home, end, delete. On the left maintains the letter keys, allowing for ctrl+c/v/z/t/w among others that are usually paired with movement. Also keeps the number rows;
 * CTRL - This is dedicated layer to commands such as screen brightness, volume and media keys, F keys (1 to 18) and led controls. Aso replaces the left shit with the left Alt.

### Using the layers
The layers are meat to be used in two pairs.
The keyboard starts on the QWERTY layer and uses the MO(SYMBOL) (momentary raise) to access the SYMBOLS layer.
The Move layer is activated with a tap on the on the MOVE key MO(MOVE) and uses the same key as the SYMBOLS to momentarily access the control layer.

All layer have an APP key (bring up the context menu on windows) and a CODE key which is shortcut to win+1 that I use to open my terminal on windows.

### Switching layers
So that you never have to guess in which layer you are the key combinations are unique to jump to and from the move layer.
 * MOVE: Pressing the SYMBOL+MOVE key set the MOVE as the current layer;
 * QWERTY: Pressing SYMBOL+BACKSPACE set the QWERTY layer. 
## Mappings

```
QWERTY
,-----------------------------------------.                    ,-----------------------------------------.
| ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
| Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  ´   |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
|LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ç  |  ~   |
|------+------+------+------+------+------| code  |    | APP   |------+------+------+------+------+------|
|LCTRL |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |RSHIFT|
`-----------------------------------------/       /     \      \-----------------------------------------'
                  | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
                  |      |      |      |/       /         \      \ |      |      |      |
                  `----------------------------'           '------''--------------------'

SYMBOL
,-----------------------------------------.                    ,-----------------------------------------.
|  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
| CAPS |  !   |  "   |  #   |  $   |  %   |                    |  &   |  /   |   (  |   )  |  =   |  '   |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
| LAlt |  |   |  @   |  \   |  <   |  >   |-------.    ,-------|  ^   |   &  |   {  |   }  |  *   |  +   |
|------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
|LCTRL |  º   |  ª   |  €   |  §   |  £   |-------|    |-------|  ;   |   :  |   [  |   ]  |  ?   |RSHIFT|
`-----------------------------------------/       /     \      \-----------------------------------------'
                  | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
                  |      |      |      |/       /         \      \ |      |      |      |
                  `----------------------------'           '------''--------------------'

MOVE
,-----------------------------------------.                    ,-----------------------------------------.
| ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
| TAB  |   Q  |   W  |   E  |   R  |   T  |                    |      | HOME | END  | DEL  | ESC  | PSCR |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
|LSHIFT|   A  |   S  |   D  |   F  |   G  |-------.    ,-------| Left | Down |  Up  |Right |      | INS  |
|------+------+------+------+------+------| QUERTY|    | RGUI  |------+------+------+------+------+------|
|LCTRL |  Z   |  X   |  C   |  V   |  B   |-------|    |-------|      | PGDN | PGDU |      | ESC  |RSHIFT|
`-----------------------------------------/       /     \      \-----------------------------------------'
                  | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP| MOVE |
                  |      |      |      |/       /         \      \ |      |      |      |
                  `----------------------------'           '------''--------------------'       

CTRL
,-----------------------------------------.                    ,-----------------------------------------.
|  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
|      | BRIU | VOLU | MPLY | MPRV |      |                    |  F13 |  F14 |  F15 | F16  | F17  | F18  |
|------+------+------+------+------+------|                    |------+------+------+------+------+------|
| LAlt | BRID | VOLD | MUTE | MNXT |      |-------.    ,-------|      |RGB ON| HUE+ | SAT+ | VAL+ |      |
|------+------+------+------+------+------|       |    |       |------+------+------+------+-------+-----|
|      |      |      |      |      |      |-------|    |-------|      | MODE | HUE- | SAT- | VAL- |RSHIFT|
`-----------------------------------------/       /     \      \-----------------------------------------'
                  | LAlt | LGUI |SYMBOL| /Space  /       \Enter \  | CTRL |BackSP|QWERTY|
                  |      |      |      |/       /         \      \ |      |      |      |
                  `----------------------------'           '------''--------------------'
```

## Compile
```
qmk compile -kb lily58/rev1 -km onereallylongname
```
