# 🧱 C Project Roadmap

![Progress](https://img.shields.io/badge/progress-0%2F37-blue)
![Language](https://img.shields.io/badge/language-C-555555)

A personal roadmap of non-generic C projects to build once the basics are in place. No calculators, no to-do apps. Each project is chosen to teach something real about memory, systems, or how software works underneath.

I track my progress here and link every finished project to its code in this repo.

---

## 📊 Progress

| Level | Done | Total |
|---|---|---|
| [Level 1: Getting real with the basics](#level-1-getting-real-with-the-basics) | 0 | 5 |
| [Level 2: Data structures from scratch](#level-2-data-structures-from-scratch) | 0 | 5 |
| [Level 3: Systems and networking](#level-3-systems-and-networking) | 0 | 7 |
| [Level 4: Languages and compilers](#level-4-languages-and-compilers) | 0 | 5 |
| [Level 5: Graphics, audio and media](#level-5-graphics-audio-and-media) | 0 | 5 |
| [Level 6: Security and low-level hacking](#level-6-security-and-low-level-hacking) | 0 | 5 |
| [Boss fights](#boss-fights) | 0 | 5 |
| **Total** | **0** | **37** |

## ✍️ How I update this file

When I finish a project I:

1. Change `[ ]` to `[x]` and wrap the project name in `~~strikethrough~~`.
2. Replace `*coming soon*` with a link to the project folder, e.g. `[code](./level-1/hexdump)`.
3. Update the counts in the table above and in the progress badge at the top.

---

## Level 1: Getting real with the basics

- [ ] **Your own `wc`, `cat` and `grep`** · *coming soon*
  Re-implement three classic Unix tools. Support a few flags each (`-l`, `-n`, `-i`).
  **Learn:** file I/O, argv parsing, string handling, buffers.

- [ ] **Hex dumper (`xxd` clone)** · *coming soon*
  Print any file as offset, hex bytes and ASCII columns.
  **Learn:** binary files, bit/byte manipulation, formatted output.

- [ ] **Brainfuck interpreter** · *coming soon*
  Tiny language, real interpreter. Then add a bracket-matching precompute step for speed.
  **Learn:** memory arrays, loops, pointers, how interpreters work.

- [ ] **Run-length + Huffman compressor** · *coming soon*
  Compress and decompress files. Compare ratios on text vs. images.
  **Learn:** bit-level I/O, trees, priority queues, file formats.

- [ ] **Terminal Game of Life** · *coming soon*
  Render with ANSI escape codes, load patterns from files, wrap edges.
  **Learn:** 2D arrays, terminal control, double buffering.

---

## Level 2: Data structures from scratch

- [ ] **Dynamic array + hash map library** · *coming soon*
  Generic-ish containers using `void*` and function pointers. Write tests and benchmark them.
  **Learn:** malloc/realloc/free discipline, hashing, resizing, API design.

- [ ] **Custom `malloc` / `free`** · *coming soon*
  Build an allocator on top of a big static buffer (free list, then coalescing, then size classes).
  **Learn:** memory layout, alignment, fragmentation.

- [ ] **Arena allocator + string library** · *coming soon*
  Make a safer string type (length + pointer) and an arena to allocate it from.
  **Learn:** why C strings are painful and how serious C projects avoid it.

- [ ] **Key-value store (mini Redis)** · *coming soon*
  In-memory store with `SET/GET/DEL`, saving to disk with an append-only log.
  **Learn:** persistence, parsing, data structure design.

- [ ] **B-tree or LSM-style on-disk database** · *coming soon*
  Store sorted records in a file, with insert, lookup and range scan.
  **Learn:** disk layout, pages, caching, durability.

---

## Level 3: Systems and networking

- [ ] **Your own shell** · *coming soon*
  Pipes, redirects, `cd`, background jobs, Ctrl+C handling.
  **Learn:** `fork`, `exec`, `pipe`, `dup2`, signals, process groups.

- [ ] **HTTP server from raw sockets** · *coming soon*
  Serve static files, parse requests by hand, handle multiple clients with `poll`/`epoll`.
  **Learn:** sockets, non-blocking I/O, protocol parsing.

- [ ] **Chat server + client (IRC-style)** · *coming soon*
  Channels, nicknames, private messages.
  **Learn:** multiplexing, state management per connection.

- [ ] **Packet sniffer** · *coming soon*
  Capture packets with raw sockets (or libpcap) and decode Ethernet, IP, TCP, UDP and DNS headers.
  **Learn:** network protocols, struct packing, endianness.

- [ ] **Thread pool + work queue** · *coming soon*
  Then use it to build a parallel file searcher.
  **Learn:** pthreads, mutexes, condition variables, race conditions.

- [ ] **Tiny container runtime** · *coming soon*
  Run a process in its own namespaces with a chroot and cgroup limits.
  **Learn:** Linux syscalls, isolation, how Docker works underneath.

- [ ] **`strace` clone** · *coming soon*
  Trace another program's syscalls with `ptrace` and print them readable.
  **Learn:** ptrace, syscall ABI, debugging internals.

---

## Level 4: Languages and compilers

- [ ] **Tokenizer + parser for a math language** · *coming soon*
  Variables, functions, operator precedence (Pratt parser or recursive descent).
  **Learn:** lexing, ASTs, recursion.

- [ ] **Bytecode VM + a small scripting language** · *coming soon*
  Compile to bytecode and run it on a stack machine (think a tiny Lua).
  **Learn:** VM design, garbage collection basics, call frames.

- [ ] **C subset compiler (to x86-64 or to your own VM)** · *coming soon*
  Start with integers and expressions, then add functions and control flow.
  **Learn:** codegen, calling conventions, register allocation.

- [ ] **Regex engine** · *coming soon*
  Parse to NFA, then simulate it (Thompson's construction), maybe compile to DFA.
  **Learn:** automata, graph traversal, why naive regex can blow up.

- [ ] **Assembler or emulator for a real CPU** · *coming soon*
  Chip-8 is the easy start, then a Game Boy or 6502 for a bigger challenge.
  **Learn:** instruction decoding, timing, memory-mapped hardware.

---

## Level 5: Graphics, audio and media

- [ ] **Software raytracer** · *coming soon*
  Spheres, planes, reflections, shadows. Output a PPM image, no libraries.
  **Learn:** vector math, floating point, performance tuning.

- [ ] **Software 3D renderer (no GPU)** · *coming soon*
  Rasterize triangles to a framebuffer with a z-buffer, texture mapping and a camera.
  **Learn:** the whole graphics pipeline from the inside.

- [ ] **Doom-style raycasting engine** · *coming soon*
  Walls, textures, sprites, with SDL2 just for the window.
  **Learn:** DDA algorithm, fixed-point math, game loops.

- [ ] **PNG or BMP decoder/encoder** · *coming soon*
  Parse headers and decode pixels (PNG means implementing inflate yourself).
  **Learn:** file format specs, CRC, compression.

- [ ] **Software synthesizer / WAV generator** · *coming soon*
  Generate waves, ADSR envelopes and filters, then play a melody from a text file.
  **Learn:** DSP basics, sample buffers, audio APIs.

---

## Level 6: Security and low-level hacking

- [ ] **Password hasher/cracker toolkit** · *coming soon*
  Implement SHA-256 yourself, then build a dictionary attack against your own test hashes.
  **Learn:** bitwise operations, crypto primitives, performance.

- [ ] **Memory leak detector** · *coming soon*
  Wrap `malloc/free` (via `LD_PRELOAD`) and report leaks with stack traces.
  **Learn:** dynamic linking, interposition, backtraces.

- [ ] **Disassembler for x86-64 (subset)** · *coming soon*
  Decode opcodes from an ELF file's `.text` section.
  **Learn:** ELF format, instruction encoding.

- [ ] **Fuzzer** · *coming soon*
  Mutate inputs, run a target program and detect crashes. Add coverage feedback for bonus points.
  **Learn:** process control, signals, finding real bugs.

- [ ] **Encrypted file vault** · *coming soon*
  Implement AES (or ChaCha20) yourself, plus a key derivation function.
  **Learn:** block ciphers, modes of operation, why you shouldn't roll your own crypto in production.

---

## Boss fights

- [ ] **Text editor (kilo-style, then vim-style)** · *coming soon*
  Raw terminal mode, syntax highlighting, search, undo.

- [ ] **Version control system (mini git)** · *coming soon*
  Content-addressed object store, commits, branches, diff and merge.

- [ ] **Filesystem in userspace (FUSE)** · *coming soon*
  Mount your own filesystem that stores data in a single file.

- [ ] **Multiplayer terminal game with a server** · *coming soon*
  Authoritative server, client prediction, a custom binary protocol.

- [ ] **Your own libc subset** · *coming soon*
  `printf`, `string.h`, `stdlib.h` and raw syscalls with no standard library at all.

---

## 📏 Standards for every project

- Compile with `-Wall -Wextra -Werror -fsanitize=address,undefined` while developing.
- Run `valgrind` before calling anything finished.
- Give each project its own folder with a short README and a few tests.
