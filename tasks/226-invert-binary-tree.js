class TreeNode {
  constructor(val, left = null, right = null) {
    this.val = val;
    this.left = left;
    this.right = right;
  }

  log() {
    let currentLevel = 0;
    const queue = [{ ...this, level: currentLevel }];

    let levelEls = [];

    while (queue.length) {
      let currentNode = queue.pop();

      currentLevel++;

      if (currentNode.left) queue.push(currentNode.left);
      if (currentNode.right) queue.push(currentNode.right);
    }
  }
}

/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
function invertBinaryTree(root) {
  const queue = [root];

  while (queue.length > 0) {
    console.log({ queue });

    const el = queue.pop();

    const temp = el ? el.left : el;
    el.left = el.right;
    el.right = temp;

    if (el.left) queue.push(el.left);
    if (el.right) queue.push(el.right);
  }

  return root;
}

const node4 = new TreeNode(4);
const node5 = new TreeNode(5);
const node6 = new TreeNode(6);
const node7 = new TreeNode(7);

const node2 = new TreeNode(2, node4, node5);
const node3 = new TreeNode(3, node6, node7);

const rootNode = new TreeNode(1, node2, node3);

const res = invertBinaryTree(rootNode);
res.log();
