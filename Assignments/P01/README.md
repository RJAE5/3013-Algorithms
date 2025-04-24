# P01 - Algorithm Presentation
### Rykir Evans, Ashley Flores, Victoria Heredia
### Description:

## 📦 Convex Hull Algorithms: Graham Scan, Jarvis March, and QuickHull

### 🎯 Purpose

This project explores **Convex Hull algorithms**, which are essential tools in computational geometry. A **Convex Hull** is the smallest convex polygon that contains all given points in a set. You can think of it like stretching a rubber band around the outermost points—it "hugs" the dataset tightly.

We focus on three core algorithms:
- **Graham Scan**
- **Jarvis March (Gift Wrapping)**
- **QuickHull**

These algorithms are fundamental for understanding spatial computation and have diverse applications in fields like computer graphics, robotics, and more.

---

### ✨ Why It’s Interesting

Convex Hulls are the foundation for many geometric operations:
- Collision detection in gaming
- Pathfinding in robotics
- Pattern recognition in AI
- Shape analysis in computer vision
- Data clustering and outlier detection

Understanding how Convex Hulls are constructed sheds light on broader concepts like **divide-and-conquer**, **greedy methods**, and **geometric sorting**.

---


### 🚀 Use Cases & Real-World Impact

| Application          | Description                                                                 |
|----------------------|-----------------------------------------------------------------------------|
| **Computer Graphics** | Hitboxes, mesh generation, and texture wrapping|
| **GIS & Mapping**     | Defining territory boundaries or skyline shapes        |
| **Robotics**          | Navigation, collision avoidance, spatial awareness        |
| **AI & Vision**       | Shape detection, facial recognition preprocessing         |
| **Data Science**      | Outlier detection, clustering, and shape descriptors for point clouds        |

---

### 📚 Summary

- **Graham Scan**: Best general-purpose method, uses sorting
- **Jarvis March**: Simple, great when few hull points
- **QuickHull**: Fast in practice, uses divide-and-conquer

Understanding these three algorithms gives insight into algorithmic thinking and prepares us for more advanced geometric or spatial problems.

—
### 📎 Neat Facts about Convex Hulls

- 🧲 **Rubber Band Analogy:** If you imagine stretching a rubber band around a set of pushpins on a board, the rubber band naturally forms the convex hull—no math needed!

- 🪢 **Convex Hull of 2D Points is Also Used in 3D:** While this project focuses on 2D, the same principles extend to 3D, where convex hulls form **convex polyhedra**—used in 3D modeling and physics engines.

- 🧮 **Small Change, Big Difference:** Adding just one point to a dataset can drastically change the convex hull shape if it's far enough from the current boundary.

- 🔁 **Rotating Calipers:** After building a convex hull, you can use a method called **Rotating Calipers** to find:
  - The diameter of a set of points
  - The smallest bounding box
  - Closest or farthest pair of points on the hull

- 🧠 **Linked to Machine Learning:** Convex hulls are foundational in **support vector machines (SVMs)**, where the goal is to separate convex regions in feature space.

- 📦 **Convex Hull Trick in DP:** There’s even something called the *Convex Hull Trick* in competitive programming and dynamic programming to optimize certain classes of problems.

- 🧊 **3D Convex Hulls Help Simulate Melting Ice!** Scientists simulate physical shapes (like melting icebergs) by calculating convex hulls at different time steps in 3D.

---

**Fun Bonus Challenge:**  
Can you think of a real-life situation where a convex hull naturally forms? (Hint: Think pizza delivery zones, or animal migration tracking!)


### 🧾 Sources

- ChatGPT Helped create this readme and do organizational tasks
- [Convex Hull Algorithms Graham Scan and Jarvis March YouTube Video](https://www.youtube.com/watch?v=B2AJoQSZf4M) 
- [Jarvis March Algorithm YouTube Video](https://www.youtube.com/watch?v=nBvCZi34F_o&t=329s) 
- [Quick Hull Algorithm Youtube
Video](https://www.youtube.com/watch?v=s39TMgSvRP0)
- [Quickhull Algorithm YouTub 
Video](https://www.youtube.com/watch?v=2EKIZrimeuk)
- [Understanding Convex Hull Algorithms: A Comprehensive Guide](https://algocademy.com/blog/understanding-convex-hull-algorithms-a-comprehensive-guide/)
- [QuickHull Algorithm GeeksforGeeks](https://www.geeksforgeeks.org/quickhull-algorithm-convex-hull/)

---

**Authored by:**  
Rykir Evans,
Ashley Flores,
Victoria Heredia
