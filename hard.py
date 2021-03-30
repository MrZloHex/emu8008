import threading




def clocking():
    global pulse = not pulse


class Cpu:
    def __init__(self):
        self.data_bus_buffer = (False, False, False, False, False, False, False, False)  # DATA BUS BUFFER  8
        self.temp_REG_a = 0x0  # REGISTER A       8
        self.temp_REG_b = 0x0  # REGISTER B       8
        self.Carry = 0x0  # CARRY look ahead 8
        self.Instr_REG = 0x0  # INSTRUCTION REG  8
        self.ALU = 0x0  # --

        self.PC = 0x0000  # Program Counter  14
        self.ST_lvl_1 = 0x0000  # Level № 1        14
        self.ST_lvl_2 = 0x0000  # Level № 2        14
        self.ST_lvl_3 = 0x0000  # Level № 3        14
        self.ST_lvl_4 = 0x0000  # Level № 4        14
        self.ST_lvl_5 = 0x0000  # Level № 5        14
        self.ST_lvl_6 = 0x0000  # Level № 6        14
        self.ST_lvl_7 = 0x0000  # Level № 7        14

        self.Accumulator = 0x0  # Accumulator      8
        self.REG_B = 0x0  # REG B            8
        self.REG_C = 0x0  # REG C            8
        self.REG_D = 0x0  # REG D            8
        self.REG_E = 0x0  # REG E            8
        self.REG_H = 0x0  # REG H            8
        self.REG_L = 0x0  # REG L            8

        self.flags = {'Z': False, 'C': False, 'S': False, 'P': False}  # Flags
        #              Zero        Carry       Sign        Parity

    def Reset(self):
        pass


class Clock:
    def __init__(self, freq):
        self.freq = freq
        self.period = 1 / freq

    def on(self):  # turn on with set frequency
        threading.Timer(10, clocking).start()

    def off(self):  # turn off clock
        pass

    def one(self):  # one pulse
        pass


if __name__ == "__main__":
    pulse = False

    clock = Clock(500)  # Hz
    #clock.on()
    clock.one()
    cpu = Cpu()
    cpu.Reset()

    clock.off()
