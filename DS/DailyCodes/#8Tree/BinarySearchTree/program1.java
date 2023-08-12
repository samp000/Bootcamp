
	class Node {
	
		int data;
		Node left;
		Node right;
		
		Node(int data) {
		
			this.data = data;
			this.left = null;
			this.right = null;
		}
	}

	class Tree {
	
		Node root = null;

		Node createTree(int data) {
	
			if(root == null)
				root = Node(data);

			if(data < root.data)
				root.left = createTree(data);
			else
				root.right = createTree(data);
		}

		void preOrder(Node r) {

			if(root != null) {
			
				System.out.print(root.data+" ");
				preOrder(r.left);
				preOrder(r.right);
			}
		}
	}

	class Demo {
	
		public static void main(String[] args) {

			Tree obj = new Tree();

			int[] arr = {100,200,150,30,50,80};

			for(int i=0;i<arr.length;i++) {
			
				obj.createTree(arr[i]);
			}

			System.out.println("------------------------------");
			prOrder(obj.root);
			System.out.println("------------------------------");
		
		}
	}
