Usage
---------------------------------
Integrating modal to View (Node content)
---------------------------------------------
1. Go to path "admin/structure/block" block configuration page.
2. Click link "Edit" for block "Ctools modal settings for nodes block".
3. Select region as Content Top for theme "SBICAP (default theme)", if it was not configured already.
4. Add the page URL, under "Show block on specific pages" for option "Only the listed pages"
5. Add field "Nid" to the view's field list if not added already.
6. Uncheck the checkbox "Link this field to the original piece of content" for "title" field.
7. Select the checkbox "Rewrite the output of this field" under Rewrite results section.
8. Add the following html snippet inside "Text",
<a href="/modal_display/node/nojs/[nid]" class="use-ajax ctools-modal-ctools-custom-style" title="[title]">[title]</a>

Note: 
1. If you are adding the above anchor tag in a page's body content, replace [nid] with actual node id and replace [title] with actual page title.

Integrating modal to Form (Any form)
--------------------------------------------
1. Go to path "admin/structure/block" block configuration page.
2. Click link "Edit" for block "Ctools modal settings for forms block".
3. Select region as Content Top for theme "SBICAP (default theme)", if it was not configured already.
4. Add the page URL, under "Show block on specific pages" for option "Only the listed pages"
5. Add the following html snippet for the form page anchor link,
<a href="/modal_display/form/nojs/<<form_id>>/<<form_name>>" class="use-ajax ctools-modal-ctools-custom-form-style" title="<<form_name>>"><<form_name>></a>

Note: 
1. Replace <<form_id>> with form's "form_id"
2. Replace <<form_name>> with page/form display name
3. In the anchor href, use php urlencode function to encode <<form_name>>, form modal callback will expect encoded form_name from the url argument.