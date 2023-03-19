import angr
import time
import logging

l = logging.getLogger('angr.manager').setLevel(logging.WARNING)
l = logging.getLogger('angr.engines.vex.engine').setLevel(logging.ERROR)

def main():
    proj = angr.Project('cave', load_options={'auto_load_libs': False})


    def correct(state):
        try:
            return b'Freedom at last!' in state.posix.dumps(1)
        except:
            return False

    def wrong(state):
        try:
            return b"Lost in the darkness, you'll wander for eternity..." in state.posix.dumps(1)
        except:
            return False

    sm = proj.factory.simulation_manager()
    sm.explore(find=correct, avoid=wrong)

    return sm.found[0].posix.dumps(0)

if __name__ == "__main__":
    before = time.time()
    print(repr(main()))
    after = time.time()
    print("Time elapsed: {}".format(after - before))
