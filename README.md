# Learning-c
Training a neural net, writing an OS memory allocator, and building an Intrusion Detection System in pure C. From scratch. Zero dependencies.

Most modern software engineering is just stacking black boxes on top of other black boxes. You import PyTorch for AI, you rely on the OS to handle `malloc()`, and you use heavy frameworks for security. We lose touch with the silicon. 

This repository is my personal gauntlet. It is a 90-step progression designed to rip away the abstractions and build the core pillars of computing—Logic, Operating Systems, AI math, and Cybersecurity—using nothing but pure C and raw math. 

No high-level libraries. No magic. Just structs, pointers, nested loops, and gradients.

## The Rule of Engagement
1. **Read the scenario.** 2. **Draft the pseudocode on physical paper.** If you can't write it on paper, you don't understand the state machine yet.
3. **Write the C code.**
4. **Compare and trace.** ---

## Part 1: The Scaffolding (Levels 0 - 6)
*70 micro-challenges. We are just building muscle memory for matrix operations, memory grids, and state machines.*

### Level 0 - 2: Bare Metal Logic
We start at absolute zero. No nested loops, just raw branching. We simulate basic OS states: ping counters, CPU overheat flags, and well-known port filters. Then we introduce 2D nested loops to build firewall permission grids and basic CCTV matrix scanners. You are learning to think in rows, columns, and memory addresses.

### Level 3 - 4: Parsers and Filters
Things get slightly heavier. We build severity log classifiers using switch-cases, string manipulators to detect buffer-overflow payloads, and IP traffic counters. We write simple text classifiers to parse "malicious" strings without using standard regex libraries.

### Level 5 - 6: Multi-Dimensional State
Here we introduce 3D matrices. We simulate 3-layer neural network operations, virtual memory chunking, and grid-search hyperparameter looping. We build a simple Cross-Validation state machine and a rudimentary Round Robin CPU scheduler. By Level 6, you are juggling multiple conditions inside 3-deep nested loops without crashing the stack.

---

## Part 2: The Capstones (Levels 7 - 9)
*This is the real game. We combine the math, the OS fundamentals, and the security policies into standalone edge-computing mini-products.*

### 🚀 Level 7:On-Device AI Classifier
A lightweight firmware for an IoT device with strict memory limits. It reads sensor features, scores them, and flags anomalies. No cloud allowed.
* **Math (AI):** A manual single-layer perceptron. We write our own `dot_product()` and `sigmoid()` for a 4D feature vector. Forward pass only. We hardcode the weights.
* **OS (Memory):** `malloc()` is banned after initialization. We build a **Custom Fixed-Block Allocator** (Memory Pool) with a free-list to prevent fragmentation on long-running edge devices.
* **Security:** Strict input validation (`strncpy` only, buffer overflows will kill the pool). We implement payload checksums and raw rate-limiting to prevent flooding attacks.

### 🛡️ Level 8:Mini Network IDS + Virtual Memory
A simulated Intrusion Detection System that handles network packets in a constrained memory environment.
* **Math (AI):** A full 2-layer Neural Network. 5 input features -> 4 hidden neurons (ReLU) -> 1 output (Sigmoid). We implement raw matrix-vector multiplication (`matvec_mul`).
* **OS (Memory):** A **Virtual Memory Simulator**. We allocate a fixed physical array (16 frames). When packets arrive, we map virtual pages to physical frames. When memory fills up, we implement a FIFO Page Replacement algorithm to evict old packets. Real OS paging logic.
* **Security:** Combined signature-based detection (substring blacklist) and anomaly detection (from our NN). Suspicious packets are moved to a fixed-size Quarantine Queue.

### 🧠 Level 9:Autonomous Edge Security Platform
The final boss. A system that actively *learns*, manages complex memory splitting, schedules its own tasks, and defends its integrity.
* **Math (AI):** We drop the hardcoded weights. We implement **Backpropagation** in pure C. We write the loss function (MSE), calculate gradients via the chain rule, and update weights using gradient descent. The network trains itself on a small embedded dataset.
* **OS (Memory):** We build a **Buddy System Allocator**. Memory is requested by splitting power-of-2 blocks and merging them back when freed. *Every* data structure in Level 9 (neural net weights, queues, packet payloads) uses this custom allocator.
* **OS (Scheduler):** A multi-stream OS Scheduler handling Network, Sensor, and Log events concurrently using a Round-Robin queue system.
* **Security:** Integrity verification using a manual FNV-1a hash algorithm. Memory region access control (simulating protection domains). Data obfuscation at rest using XOR ciphering. 

---
### Usage
Clone the repo. Compile with `gcc`. 
```bash
git clone https://github.com/adiariawan1/learning-c
cd learning-c
